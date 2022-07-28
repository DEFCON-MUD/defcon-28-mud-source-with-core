inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 8 }));
  set_short( "Corridor - x1y48z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y48z8.c",
  "north" : DIR+"/rooms/x1y49z8.c",
  "south" : DIR+"/rooms/x1y47z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
