inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 23, 2 }));
  set_short( "Hallway - x5y23z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y24z2.c",
  "south" : DIR+"/rooms/x5y22z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
