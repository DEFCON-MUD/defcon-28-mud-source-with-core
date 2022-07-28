inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 7 }));
  set_short( "Corridor - x61y31z7" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z7.c",
  "south" : DIR+"/rooms/x61y30z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
