inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 5 }));
  set_short( "Hallway - x49y2z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z5.c",
  "north" : DIR+"/rooms/x49y3z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
