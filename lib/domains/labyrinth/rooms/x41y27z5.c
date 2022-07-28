inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 27, 5 }));
  set_short( "Corridor - x41y27z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y28z5.c",
  "south" : DIR+"/rooms/x41y26z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
