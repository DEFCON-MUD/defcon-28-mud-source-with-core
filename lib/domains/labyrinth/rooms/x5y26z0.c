inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 0 }));
  set_short( "Corridor - x5y26z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y26z0.c",
  "east" : DIR+"/rooms/x6y26z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
