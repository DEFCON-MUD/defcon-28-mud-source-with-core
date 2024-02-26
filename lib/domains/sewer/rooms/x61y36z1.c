inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 1 }));
  set_short( "Corridor - x61y36z1" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y36z1.c",
  "north" : DIR+"/rooms/x61y37z1.c",
  "south" : DIR+"/rooms/x61y35z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
