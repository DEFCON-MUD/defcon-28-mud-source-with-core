inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 9 }));
  set_short( "Hallway - x36y58z9" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z9.c",
  "east" : DIR+"/rooms/x37y58z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
