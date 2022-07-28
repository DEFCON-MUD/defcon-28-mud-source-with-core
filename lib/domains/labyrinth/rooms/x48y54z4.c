inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 54, 4 }));
  set_short( "Corridor - x48y54z4" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y54z4.c",
  "east" : DIR+"/rooms/x49y54z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
