inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 5 }));
  set_short( "Corridor - x29y31z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z5.c",
  "south" : DIR+"/rooms/x29y30z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
