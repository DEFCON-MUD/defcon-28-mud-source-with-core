inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 5 }));
  set_short( "Hallway - x23y6z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y6z5.c",
  "north" : DIR+"/rooms/x23y7z5.c",
  "south" : DIR+"/rooms/x23y5z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
