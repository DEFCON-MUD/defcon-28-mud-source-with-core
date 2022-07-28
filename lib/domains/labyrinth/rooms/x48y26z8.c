inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 26, 8 }));
  set_short( "Passage - x48y26z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y26z8.c",
  "east" : DIR+"/rooms/x49y26z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
