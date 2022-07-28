inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 41, 6 }));
  set_short( "Corridor - x57y41z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y42z6.c",
  "south" : DIR+"/rooms/x57y40z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
