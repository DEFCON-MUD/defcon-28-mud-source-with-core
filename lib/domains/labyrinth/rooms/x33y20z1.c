inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 1 }));
  set_short( "Corridor - x33y20z1" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y20z1.c",
  "east" : DIR+"/rooms/x34y20z1.c",
  "north" : DIR+"/rooms/x33y21z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
