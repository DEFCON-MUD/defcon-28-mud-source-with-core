inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 6 }));
  set_short( "Hallway - x7y44z6" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z6.c",
  "north" : DIR+"/rooms/x7y45z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
