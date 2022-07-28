inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 48, 7 }));
  set_short( "Hallway - x16y48z7" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y48z7.c",
  "east" : DIR+"/rooms/x17y48z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
