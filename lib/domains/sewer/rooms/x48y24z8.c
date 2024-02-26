inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 8 }));
  set_short( "Corridor - x48y24z8" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z8.c",
  "east" : DIR+"/rooms/x49y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
