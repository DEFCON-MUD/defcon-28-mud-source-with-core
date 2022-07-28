inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 7, 4 }));
  set_short( "Passage - x55y7z4" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y8z4.c",
  "south" : DIR+"/rooms/x55y6z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
