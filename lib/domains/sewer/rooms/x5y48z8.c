inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 8 }));
  set_short( "Passage - x5y48z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z8.c",
  "east" : DIR+"/rooms/x6y48z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
