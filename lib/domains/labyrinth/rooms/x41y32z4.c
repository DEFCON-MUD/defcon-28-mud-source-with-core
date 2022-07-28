inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 4 }));
  set_short( "Passage - x41y32z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y32z4.c",
  "north" : DIR+"/rooms/x41y33z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
