inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 29, 3 }));
  set_short( "Corridor - x29y29z3" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y30z3.c",
  "south" : DIR+"/rooms/x29y28z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
