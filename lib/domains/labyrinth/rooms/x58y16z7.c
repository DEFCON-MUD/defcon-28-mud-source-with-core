inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 16, 7 }));
  set_short( "Hallway - x58y16z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y16z7.c",
  "east" : DIR+"/rooms/x59y16z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
