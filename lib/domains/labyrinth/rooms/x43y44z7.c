inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 7 }));
  set_short( "Passage - x43y44z7" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y44z7.c",
  "east" : DIR+"/rooms/x44y44z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
