inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 32, 4 }));
  set_short( "Corridor - x21y32z4" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y32z4.c",
  "east" : DIR+"/rooms/x22y32z4.c",
  "north" : DIR+"/rooms/x21y33z4.c",
  "south" : DIR+"/rooms/x21y31z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
