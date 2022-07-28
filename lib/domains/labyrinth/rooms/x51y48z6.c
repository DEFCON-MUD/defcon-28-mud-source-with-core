inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 6 }));
  set_short( "Corridor - x51y48z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z6.c",
  "east" : DIR+"/rooms/x52y48z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
