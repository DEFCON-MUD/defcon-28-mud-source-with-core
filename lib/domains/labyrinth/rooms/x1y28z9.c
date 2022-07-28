inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 9 }));
  set_short( "Hallway - x1y28z9" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y29z9.c",
  "south" : DIR+"/rooms/x1y27z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
