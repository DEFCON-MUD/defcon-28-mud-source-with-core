inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 49, 9 }));
  set_short( "Hallway - x7y49z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y50z9.c",
  "south" : DIR+"/rooms/x7y48z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
