inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 5 }));
  set_short( "Corridor - x47y56z5" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "south" : DIR+"/rooms/x47y55z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
