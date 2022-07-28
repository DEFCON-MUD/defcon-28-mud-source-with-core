inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 5 }));
  set_short( "Passage - x43y38z5" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y38z5.c",
  "east" : DIR+"/rooms/x44y38z5.c",
  "north" : DIR+"/rooms/x43y39z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
