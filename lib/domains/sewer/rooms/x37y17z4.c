inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 4 }));
  set_short( "Corridor - x37y17z4" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z4.c",
  "south" : DIR+"/rooms/x37y16z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
