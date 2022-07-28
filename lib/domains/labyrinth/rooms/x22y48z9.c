inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 9 }));
  set_short( "Passage - x22y48z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z9.c",
  "east" : DIR+"/rooms/x23y48z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
