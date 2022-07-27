inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 31, 1 }));
  set_short( "Corridor - x49y31z1" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y32z1.c",
  "south" : DIR+"/rooms/x49y30z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
