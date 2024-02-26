inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 8 }));
  set_short( "Passage - x17y16z8" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z8.c",
  "north" : DIR+"/rooms/x17y17z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
