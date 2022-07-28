inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 9 }));
  set_short( "Hallway - x45y50z9" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y50z9.c",
  "east" : DIR+"/rooms/x46y50z9.c",
  "north" : DIR+"/rooms/x45y51z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
