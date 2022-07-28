inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 6 }));
  set_short( "Passage - x5y62z6" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z6.c",
  "east" : DIR+"/rooms/x6y62z6.c",
  "south" : DIR+"/rooms/x5y61z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
