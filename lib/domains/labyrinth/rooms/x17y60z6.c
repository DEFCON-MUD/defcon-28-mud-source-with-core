inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 6 }));
  set_short( "Hallway - x17y60z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y60z6.c",
  "north" : DIR+"/rooms/x17y61z6.c",
  "south" : DIR+"/rooms/x17y59z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
