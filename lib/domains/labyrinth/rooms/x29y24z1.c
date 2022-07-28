inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 1 }));
  set_short( "Corridor - x29y24z1" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y24z1.c",
  "north" : DIR+"/rooms/x29y25z1.c",
  "south" : DIR+"/rooms/x29y23z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
