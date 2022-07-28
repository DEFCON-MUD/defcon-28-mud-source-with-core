inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 1 }));
  set_short( "Corridor - x16y62z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z1.c",
  "east" : DIR+"/rooms/x17y62z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
