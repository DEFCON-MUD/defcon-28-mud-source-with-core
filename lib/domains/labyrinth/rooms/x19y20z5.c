inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 20, 5 }));
  set_short( "Hallway - x19y20z5" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y21z5.c",
  "south" : DIR+"/rooms/x19y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
