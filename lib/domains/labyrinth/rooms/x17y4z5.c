inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 5 }));
  set_short( "Corridor - x17y4z5" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y4z5.c",
  "north" : DIR+"/rooms/x17y5z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
