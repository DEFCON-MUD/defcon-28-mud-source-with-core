inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 3, 2 }));
  set_short( "Corridor - x55y3z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y4z2.c",
  "south" : DIR+"/rooms/x55y2z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
