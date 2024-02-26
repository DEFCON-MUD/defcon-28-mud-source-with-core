inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 9 }));
  set_short( "Hallway - x41y24z9" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y24z9.c",
  "east" : DIR+"/rooms/x42y24z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
