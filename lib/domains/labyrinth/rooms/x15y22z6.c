inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 6 }));
  set_short( "Passage - x15y22z6" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y22z6.c",
  "east" : DIR+"/rooms/x16y22z6.c",
  "north" : DIR+"/rooms/x15y23z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
