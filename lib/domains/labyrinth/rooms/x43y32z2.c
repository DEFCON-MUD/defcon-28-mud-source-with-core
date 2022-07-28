inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 32, 2 }));
  set_short( "Corridor - x43y32z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y32z2.c",
  "east" : DIR+"/rooms/x44y32z2.c",
  "north" : DIR+"/rooms/x43y33z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
