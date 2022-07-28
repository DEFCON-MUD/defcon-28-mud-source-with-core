inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 50, 9 }));
  set_short( "Hallway - x22y50z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y50z9.c",
  "east" : DIR+"/rooms/x23y50z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
