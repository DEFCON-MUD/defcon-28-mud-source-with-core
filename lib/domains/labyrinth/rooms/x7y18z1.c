inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 1 }));
  set_short( "Hallway - x7y18z1" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y18z1.c",
  "east" : DIR+"/rooms/x8y18z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
