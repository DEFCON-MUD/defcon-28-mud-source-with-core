inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 7 }));
  set_short( "Corridor - x21y16z7" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y16z7.c",
  "east" : DIR+"/rooms/x22y16z7.c",
  "north" : DIR+"/rooms/x21y17z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
