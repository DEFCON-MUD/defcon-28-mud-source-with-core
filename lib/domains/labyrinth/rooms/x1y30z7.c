inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 7 }));
  set_short( "Passage - x1y30z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y30z7.c",
  "south" : DIR+"/rooms/x1y29z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
