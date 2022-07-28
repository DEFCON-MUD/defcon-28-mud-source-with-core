inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 42, 0 }));
  set_short( "Corridor - x46y42z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y42z0.c",
  "east" : DIR+"/rooms/x47y42z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
