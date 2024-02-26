inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 9 }));
  set_short( "Corridor - x7y22z9" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y22z9.c",
  "south" : DIR+"/rooms/x7y21z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
