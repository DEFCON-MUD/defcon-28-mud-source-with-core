inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 28, 4 }));
  set_short( "Passage - x6y28z4" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y28z4.c",
  "east" : DIR+"/rooms/x7y28z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
