inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 6 }));
  set_short( "Hallway - x47y26z6" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y26z6.c",
  "north" : DIR+"/rooms/x47y27z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
