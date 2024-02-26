inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 26, 6 }));
  set_short( "Hallway - x44y26z6" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y26z6.c",
  "east" : DIR+"/rooms/x45y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
