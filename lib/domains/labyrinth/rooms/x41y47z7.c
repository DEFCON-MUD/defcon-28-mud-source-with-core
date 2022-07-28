inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 47, 7 }));
  set_short( "Hallway - x41y47z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y48z7.c",
  "south" : DIR+"/rooms/x41y46z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
