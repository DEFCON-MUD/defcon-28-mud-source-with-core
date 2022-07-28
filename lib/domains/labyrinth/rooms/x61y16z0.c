inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 0 }));
  set_short( "Corridor - x61y16z0" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y17z0.c",
  "south" : DIR+"/rooms/x61y15z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
