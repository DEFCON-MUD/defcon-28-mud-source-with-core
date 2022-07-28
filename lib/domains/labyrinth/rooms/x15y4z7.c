inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 7 }));
  set_short( "Hallway - x15y4z7" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y4z7.c",
  "north" : DIR+"/rooms/x15y5z7.c",
  "south" : DIR+"/rooms/x15y3z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
